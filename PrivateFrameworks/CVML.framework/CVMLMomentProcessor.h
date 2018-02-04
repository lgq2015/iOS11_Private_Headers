/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLMomentProcessor : NSObject {
    CVMLMPContext * _context;
}

@property (nonatomic, retain) CVMLMPContext *context;

+ (id)sortImageDescriptorsChronologically:(id)arg1;

- (void).cxx_destruct;
- (id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3;
- (id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id*)arg3;
- (id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(bool)arg2 error:(id*)arg3;
- (id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id*)arg2;
- (id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id*)arg2;
- (id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id*)arg2;
- (id)context;
- (id)convertClusterNodesListToDescriptorsList:(struct vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> > { struct MPClusteringTreeNode {} **x1; struct MPClusteringTreeNode {} **x2; struct __compressed_pair<MPClusteringTreeNode **, std::__1::allocator<MPClusteringTreeNode *> > { struct MPClusteringTreeNode {} **x_3_1_1; } x3; })arg1;
- (id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)performClustersPostprocessing:(id)arg1 error:(id*)arg2;
- (id)processImagesFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)setContext:(id)arg1;

@end
