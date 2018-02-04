/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTextTangierContainerInfo : TSDContainerInfo <STTangierRepDirectLayerHostingInfo> {
    <TSDRepDirectLayerHosting> * _directLayerHost;
    NSSet * _fixedExclusionPaths;
    bool  _isSelectable;
    bool  _shouldHyphenate;
    STTextTangierStorage * _storage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <TSDRepDirectLayerHosting> *directLayerHost;
@property (nonatomic, retain) NSSet *fixedExclusionPaths;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSelectable;
@property (nonatomic, retain) NSSet *rangedExclusionPaths;
@property (nonatomic) bool shouldHyphenate;
@property (nonatomic, readonly) STTextTangierStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)directLayerHost;
- (id)fixedExclusionPaths;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 stylesheet:(id)arg3 string:(id)arg4 locale:(id)arg5;
- (bool)isSelectable;
- (Class)layoutClass;
- (id)rangedExclusionPaths;
- (Class)repClass;
- (void)setDirectLayerHost:(id)arg1;
- (void)setFixedExclusionPaths:(id)arg1;
- (void)setIsSelectable:(bool)arg1;
- (void)setRangedExclusionPaths:(id)arg1;
- (void)setShouldHyphenate:(bool)arg1;
- (bool)shouldHyphenate;
- (id)storage;

@end
