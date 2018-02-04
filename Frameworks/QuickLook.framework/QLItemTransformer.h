/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemTransformer : NSObject <QLItemTransformerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedOutputClasses;

- (id)transformedContentsFromData:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (id)transformedContentsFromURL:(id)arg1 context:(id)arg2 error:(id*)arg3;

@end
