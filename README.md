rbv_rel
=======
Retebuonvivere: Relation content type

Description
-----------
This is a [drupal feature] [2], which will install the *content type* Relation for retebuonvivere website, and all dependent settings. 
The relation type is obtained using [entityreference] [3] module. 
Two entityreference fields, one for the source (organization) and one for the target (organization or project). 
The source field is made with og_reference widget (in order to permit only the selection of user's own Organization as the source node for the relation).

Why not the [relation] [4] module?
----------------------------------
We have tried both relation and entityreference modules. 
With relation module we could create simmetrical relations (like indeed collaborations among organizations), but we couldn't manage to have revisions of the relation fields. 
Moreover, we couldn't apply RDF mappings to the relation itself, as a RDF type, which is one of the goals of this project.
Still we recognize that relation module is a great way for creating and managing relations. And it has visualization integration, which is very interesting to us.

Submodule of
------------
This repository is a submodule of [retebuonvivere] [1]

[1]: https://github.com/fonzy85vr/retebuonvivere
[2]: https://drupal.org/project/features
[3]: https://drupal.org/project/enityreference
[4]: https://drupal.org/project/relation
