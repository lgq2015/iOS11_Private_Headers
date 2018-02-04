/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNURLSessionFactory : NSObject

+ (id)defaultFactory;

- (id)defaultSessionConfiguration;
- (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end