/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLAggregateLogger : NSObject

+ (bool)_attachmentsContainImage:(id)arg1;
+ (bool)_attachmentsContainURL:(id)arg1;
+ (id)_logIdentifierForPID:(int)arg1;
+ (void)logFacebookAppInstallChoice:(bool)arg1;
+ (void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2;
+ (void)logFlickrAppInstallChoice:(bool)arg1;
+ (void)logPostWithServiceNameKey:(id)arg1 text:(id)arg2 attachments:(id)arg3 locationAttached:(bool)arg4 fromProcessWithPID:(int)arg5;
+ (void)logTencentWeiboAppInstallChoice:(bool)arg1;
+ (void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(bool)arg3 fromProcessWithPID:(int)arg4;
+ (void)logTwitterAppInstallChoice:(bool)arg1;
+ (void)logVimeoAppInstallChoice:(bool)arg1;
+ (void)logWeiboAppInstallChoice:(bool)arg1;
+ (void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(bool)arg3 fromProcessWithPID:(int)arg4;

@end
