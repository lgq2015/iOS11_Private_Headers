/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {
    int  _classType;
    NSString * _fileStateIdentifier;
    long long  _identifier;
    SFUDataRepresentation * _objectData;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * _ownedIds;
    NSString * _relativeDataPath;
    unsigned int  _version;
}

@property (nonatomic) int classType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *relativeDataPath;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (int)classType;
- (id)dataRepresentation;
- (void)dealloc;
- (id)fileStateIdentifier;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1;
- (bool)isLoaded;
- (const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)ownedIds;
- (id)relativeDataPath;
- (void)setClassType:(int)arg1;
- (bool)setDataRepresentation:(id)arg1 shouldCopy:(bool)arg2 error:(id*)arg3;
- (void)setFileStateIdentifier:(id)arg1;
- (void)setOwnedIds:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)setRelativeDataPath:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end
