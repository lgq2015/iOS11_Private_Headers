/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableWriter : NSObject {
    TSPDatabase * _database;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _encodedIds;
    TSPDistributableFileManager * _fileManager;
    bool  _isCancelled;
    TSPDistributableArchiveOutputStream * _outputStream;
    unsigned long long  _processedEntriesCount;
    struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _typesSeen;
}

- (void).cxx_destruct;
- (id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4 includeToc:(bool)arg5;
- (bool)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id*)arg4;
- (void)cancel;
- (void)dealloc;
- (bool)goAndReportProgress:(bool)arg1 error:(id*)arg2 context:(id)arg3;
- (id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned int)arg4;

@end
