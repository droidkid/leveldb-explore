#include <iostream>
#include <cassert>

#include "leveldb/db.h"

using namespace std;

int main() {
    leveldb::DB* db;
    leveldb::Options options;
    options.create_if_missing = true;
    leveldb::Status status = leveldb::DB::Open(options, "/tmp/testdb", &db);
    assert(status.ok());
    cout<<"All looks good! DB created at /tmp/testdb"<<endl;
}