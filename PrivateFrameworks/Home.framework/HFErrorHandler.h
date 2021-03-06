/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFErrorHandler : NSObject

+ (id)descriptionLocalizationKeyForError:(id)arg1;
+ (id)sharedHandler;

- (bool)_isErrorIndicativeOfApplicationBug:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (bool)_isErrorPermanent:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedDescriptionForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (id)_localizedStringOrNilIfNotFoundForKey:(id)arg1;
- (id)_localizedTitleForError:(id)arg1 operationType:(id)arg2 options:(id)arg3;
- (bool)canIgnoreError:(id)arg1;
- (void)handleError:(id)arg1;
- (void)handleError:(id)arg1 operationType:(id)arg2 options:(id)arg3 retryBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)handleError:(id)arg1 retryBlock:(id /* block */)arg2 cancelBlock:(id /* block */)arg3;
- (void)logError:(id)arg1 operationDescription:(id)arg2;

@end
