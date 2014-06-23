
START TRANSACTION;

update node set type = 'collection' where type='project';

insert into content_type_collection select * from content_type_project;
insert into content_field_members select * from content_field_project_member;
insert into content_field_editors select * from content_field_project_editors;
insert into content_field_managers select * from content_field_project_admins;

COMMIT;
