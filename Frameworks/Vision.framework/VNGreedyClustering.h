/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGreedyClustering : NSObject <VNClustering> {
    VNClusteringLogger * _clusteringLogger;
    VNSuggestionsLogger * _suggestionsLogger;
    struct shared_ptr<vision::mod::GreedyClustererFaces> { 
        struct GreedyClustererFaces {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl;
}

+ (void)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg2;
+ (bool)isLogEnabled;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 facesToMove:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x1; struct pair<long long, long long> {} *x2; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x_3_1_1; } x3; }*)arg2;
- (bool)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3;
- (bool)cancelClustering:(id*)arg1;
- (id)convertUpdatePairsToClusters:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x1; struct pair<long long, long long> {} *x2; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x_3_1_1; } x3; }*)arg1;
- (id)getClusterState:(id*)arg1;
- (id)getClusteredIds;
- (id)getClustersForClusterIds:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)getClustersWithOptions:(id)arg1 error:(id*)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceId:(id)arg1 andFaceId:(id)arg2;
- (id)getDistanceBetweenLevel0ClustersWithFaceIds:(id)arg1;
- (id)getDistanceBetweenLevel1Clusters:(id)arg1;
- (id)getDistances:(id)arg1 to:(id)arg2;
- (id)getLevel0ClusteredIdsForFaceId:(id)arg1;
- (id)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:(id)arg1;
- (id)getRepresentativenessForFaces:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)refinedSuggestionsForClusterIds:(id)arg1 fromClusters:(id)arg2 affinityThreshold:(float)arg3 error:(id*)arg4;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
