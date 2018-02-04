/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSDocument : NSObject <GQWrapPointGenerator> {
    bool  _doCalculateThumbnailSize;
    SFUZipArchive * mArchive;
    struct __CFDictionary { } * mBundleResourceUriMap;
    struct __CFURL { } * mBundleUrl;
    Class  mCurrentDrawablesGenerator;
    Class  mCurrentTableGenerator;
    <GQWrapPointGenerator> * mCurrentWrapPointGenerator;
    bool  mDoExternalTextWrap;
    struct __CFURL { } * mDocumentUrl;
    struct __CFString { } * mFilename;
    bool  mGeneratingThumbnail;
    bool  mGeneratorBeginWasCalled;
    id  mGeneratorState;
    bool  mIsReadingStorageAttachments;
    bool  mMustRegisterDrawables;
    struct __CFArray { } * mObjectStack;
    <GQUOutputBundle> * mOutputBundle;
    GQPProcessor * mProcessor;
    GQDRoot * mRoot;
    bool  mShouldStreamTables;
    GQDSStylesheet * mStylesheet;
    GQSTable * mTableState;
    unsigned int  mTextScale;
    bool  mThumbnailGenerationDone;
    struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, GQUtility::NSObjectComparator<GQDWrapPoint> > { unsigned long long x_3_2_1; struct NSObjectComparator<GQDWrapPoint> { SEL x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; } * mWrapPoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doCalculateThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addWrapPoint:(id)arg1;
- (void)clearWrapPoints;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x1; struct ObjcSharedPtr<GQDWrapPoint> {} *x2; struct __compressed_pair<GQUtility::ObjcSharedPtr<GQDWrapPoint> *, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x_3_1_1; } x3; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (struct __CFURL { }*)createUriToDocumentBundleResource:(struct __CFString { }*)arg1;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2 skipCachingPDFAndNoExtentionResources:(bool*)arg3;
- (Class)currentDrawablesGenerator;
- (Class)currentTableGenerator;
- (id)currentWrapPointGenerator;
- (void)dealloc;
- (bool)doCalculateThumbnailSize;
- (bool)doExternalTextWrap;
- (struct __CFString { }*)filename;
- (bool)generatorBeginWasCalled;
- (id)generatorState;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 fileURL:(struct __CFURL { }*)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL { }*)arg3 archive:(id)arg4 outputBundle:(id)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 fileURL:(struct __CFURL { }*)arg4;
- (bool)isGeneratingThumbnail;
- (bool)isReadingStorageAttachments;
- (bool)isThumbnailGenerationDone;
- (bool)mustRegisterDrawables;
- (int)objectStackDepth;
- (id)outputBundle;
- (id)peekObject;
- (id)popRetainedObject;
- (id)processor;
- (void)pushObject:(id)arg1;
- (id)root;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (void)setCurrentTableGenerator:(Class)arg1;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (void)setDoCalculateThumbnailSize:(bool)arg1;
- (void)setDoExternalTextWrap:(bool)arg1;
- (void)setGeneratingThumbnail:(bool)arg1;
- (void)setGeneratorBeginWasCalled;
- (void)setGeneratorState:(id)arg1;
- (void)setIsReadingStorageAttachments:(bool)arg1;
- (void)setMustRegisterDrawables:(bool)arg1;
- (void)setShouldStreamTables:(bool)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTableState:(id)arg1;
- (void)setThumbnailGenerationDone:(bool)arg1;
- (bool)shouldStreamTables;
- (id)stylesheet;
- (id)tableState;
- (id)topObjectOfClass:(Class)arg1;
- (struct __CFString { }*)uriForBundleResource:(struct __CFString { }*)arg1 ofType:(struct __CFString { }*)arg2;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, GQUtility::NSObjectComparator<GQDWrapPoint> > { unsigned long long x_3_2_1; struct NSObjectComparator<GQDWrapPoint> { SEL x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; }*)wrapPoints;

@end
