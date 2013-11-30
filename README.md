rbv_rel
=======
Retebuonvivere: Relation content type

Description
-----------
This is a [drupal feature] [2], which will install the *content type* Relation for retebuonvivere website, and all dependent settings. 

Functioning
-----------
The relation type is obtained using [entityreference][3] module. 

Two entityreference fields, one for the source organization and one for the target organization. 

At beginning we tried to make the source field with og_reference widget in order to permit only the selection of user's own Organization as source.
This turned out to be a dead end, because the og_reference widget is already used once in this content type: in the og_audience field.
The audience field states which og_groups has this content. It seams that og_reference cannot be used twice in a content type.

After this empasse we ended up with a different strategy: to permit users to insert other groups in the source field. Why?
* To permit wiki-like functionality: if a user wants to describe a relation between two organizations (none of which she is a member of), she can. 
* But, the owners of the relation should always be the source and target groups! 
  This way they can do what they want with the relations they are mentioned in. 

In this way we allow more people to gather data, but at the same time we have a way to manage possible conflicts.

So how can this be done?
* The audience field is prepopulated with the group being viewed. This is possible through a "create relation" link on the group home page and using [entityreference_prepopulate][6] module (which has automatic integration with og module).
* We use [rules][5] module. We have a rule with this settings (I've posted a comment to this [issue][7]):
  Event: After saving new content of type Relazione
  Condition: none
  Action: Add entity to group | Parameter: Entity: [node], Group: [node:field-target]

As you can see this rule covers only one piece: it extends audience to the target group (with no need to be site admin!).

So there still is work to do: "if the source is different from user's group, then add source group to audience and remove user's group from audience".

Why not the [relation][4] module?
----------------------------------
We have tried both relation and entityreference modules. 
With relation module we could create simmetrical relations (like indeed collaborations among organizations), but we couldn't manage to have revisions of the relation fields. 
Moreover, we couldn't apply RDF mappings to the relation itself, as a RDF type, which is one of the goals of this project.
Still we recognize that relation module is a great way for creating and managing relations. And it has visualization integration, which is very interesting to us.

Submodule of
------------
This repository is a submodule of [retebuonvivere][1]

Wiki
----
Go to the [relations system wiki][8] for more stuff about how we want to implement relations in this project.

[1]: https://github.com/fonzy85vr/retebuonvivere
[2]: https://drupal.org/project/features
[3]: https://drupal.org/project/enityreference
[4]: https://drupal.org/project/relation
[5]: https://drupal.org/project/rules
[6]: https://drupal.org/project/entityreference_prepopulate
[7]: https://drupal.org/comment/8155329#comment-8155329
[8]: https://github.com/miromarchi/rbv_relations/wiki
