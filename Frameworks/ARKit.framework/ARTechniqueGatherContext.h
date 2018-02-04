/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTechniqueGatherContext : NSObject <ARResultDataContext> {
    NSMutableArray * _gatheredData;
    id  _parentContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id parentContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)gatheredData;
- (id)imageData;
- (id)initWithParentContext:(id)arg1;
- (id)parentContext;
- (id)resultDataOfClass:(Class)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionOriginTransform;
- (void)setGatheredData:(id)arg1;
- (void)setParentContext:(id)arg1;

@end
