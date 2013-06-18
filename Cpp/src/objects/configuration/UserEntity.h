#ifndef USERENTITY_H
#define USERENTITY_H

#include "../../serializers/json/JsonSerializable.h"
//#include "../../serializers/xml/XmlSerializable.h"
//#include "../../serializers/xml/UserEntityXmlHandler.h"

using namespace std;

class UserEntity: public JsonSerializable {
public:
    UserEntity();
    UserEntity(string name, string type);
    virtual ~UserEntity();

    virtual void Serialize(Json::Value& root);
    virtual void Deserialize(Json::Value& root);

    string GetName() {return name;}
    string GetType() {return type;}
    string GetLabel(){return label;}

    void SetName(string name) {this->name = name;}
    void SetType(string type) {this->type = type;}
    void SetLabel(string label) {this->label = label;}

private:
    string name;
    string type;
    string label;
};

#endif // ENTITY_H
