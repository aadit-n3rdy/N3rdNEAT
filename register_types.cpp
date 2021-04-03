
#include "register_types.h"

#include "core/class_db.h"
#include "include/N3rdNEAT/N3rdNEAT.h"

void register_summator_types() {
    ClassDB::register_class<N3rdNEAT>();
}

void unregister_summator_types() {
}
