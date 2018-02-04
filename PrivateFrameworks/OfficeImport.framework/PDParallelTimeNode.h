/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDParallelTimeNode : PDTimeNode {
    PDParallelTimeNodeBuildInfo * mBuildInfo;
}

@property (retain) PDParallelTimeNodeBuildInfo *buildInfo;

- (id)buildInfo;
- (void)dealloc;
- (void)setBuildInfo:(id)arg1;

@end
