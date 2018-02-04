/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSPDataManager : NSObject {
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _datasQueue;
    struct hash_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { 
        struct __hash_table<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, true>, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _digestToDataMap;
    NSObject<OS_dispatch_group> * _externalReferenceRemovalGroup;
    bool  _hasExternalReferences;
    struct hash_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak> > > { 
        struct __hash_table<std::__1::pair<const long long, TSPData *__weak>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSPData *__weak>, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _identifierToDataMap;
    NSURL * _lastDocumentURL;
    long long  _nextNewIdentifier;
    NSObject<OS_dispatch_queue> * _temporaryDirectoryQueue;
    NSURL * _temporaryDirectoryURL;
    TSUPathSet * _temporaryPathSet;
    NSURL * _temporaryUniqueDirectoryURL;
}

@property (nonatomic, readonly) TSPObjectContext *context;

+ (void)readWithChannel:(id)arg1 handler:(id /* block */)arg2;
+ (id)stringForDigest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (id)addNewDataForStorage:(id)arg1 digest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg2 filename:(id)arg3;
- (id)checkForPersistenceWarningsWithPackageURL:(id)arg1;
- (id)context;
- (void)coordinateReadingNewFileURL:(id)arg1 byAccessor:(id /* block */)arg2;
- (id)copyData:(id)arg1;
- (id)createTemporaryDirectoryForPackageURL:(id)arg1;
- (id)dataForDigest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1;
- (void)dataForDigest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)dataForDigestImpl:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1 accessorBlock:(id /* block */)arg2;
- (id)dataForDigestImpl:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg1 skipDocumentResourcesLookup:(bool)arg2 accessorBlock:(id /* block */)arg3;
- (id)dataForExistingData:(id)arg1 digest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg2 filename:(id)arg3 temporaryPath:(id)arg4;
- (id)dataForIdentifier:(long long)arg1;
- (id)dataForIdentifierImpl:(long long)arg1;
- (id)dataFromAssetsLibraryURL:(id)arg1;
- (void)dataFromAssetsLibraryURL:(id)arg1 completion:(id /* block */)arg2;
- (id)dataFromExternalReferenceURL:(id)arg1 useFileCoordination:(bool)arg2;
- (id)dataFromFileURL:(id)arg1 useFileCoordination:(bool)arg2;
- (id)dataFromNSData:(id)arg1 filename:(id)arg2;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 temporaryPath:(id)arg3;
- (id)dataFromURL:(id)arg1 useFileCoordination:(bool)arg2;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (id)dataWithStorage:(id)arg1 digest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg2 filename:(id)arg3 skipDocumentResourcesLookup:(bool)arg4 accessorBlock:(id /* block */)arg5;
- (id)dataWithTemporaryPath:(id)arg1 digest:(const struct array<unsigned char, 20> { unsigned char x1[20]; }*)arg2 filename:(id)arg3;
- (void)dealloc;
- (void)didCloseDocument;
- (id)documentResourceDataWithStorage:(id)arg1 digestString:(id)arg2 filename:(id)arg3;
- (void)enumerateDatasUsingBlock:(id /* block */)arg1;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 readHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 temporaryPath:(id)arg3 shouldWriteIfFound:(bool)arg4 completion:(id /* block */)arg5;
- (id)initWithContext:(id)arg1;
- (bool)linkTemporaryPath:(id)arg1 fromURL:(id)arg2;
- (int)openTemporaryPath:(id)arg1;
- (void)removeExternalReferenceForData:(id)arg1 storage:(id)arg2;
- (void)removeExternalReferences;
- (void)removeFileAtPath:(id)arg1;
- (void)removeTemporaryDirectory;
- (void)setDocumentURL:(id)arg1;
- (id)temporaryPathForFilename:(id)arg1;
- (void)waitForRemoveExternalReferencesToComplete;

@end
