/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLAssertionHandler : NSObject

+ (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
+ (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(char *)arg5;
+ (id)performBlockIgnoringAssertions:(id /* block */)arg1;

@end