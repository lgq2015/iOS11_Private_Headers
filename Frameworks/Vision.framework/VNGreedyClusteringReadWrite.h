/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {
    struct shared_ptr<vision::mod::GreedyClustererFaces> { 
        struct GreedyClustererFaces {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg1 facesToMove:(struct vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x1; struct pair<long long, long long> {} *x2; struct __compressed_pair<std::__1::pair<long long, long long> *, std::__1::allocator<std::__1::pair<long long, long long> > > { struct pair<long long, long long> {} *x_3_1_1; } x3; }*)arg2;
- (bool)cancelClustering:(id*)arg1;
- (id)getClustersWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
