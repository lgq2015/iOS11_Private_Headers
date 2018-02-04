/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGDSuggestManagerInterface : NSObject

+ (void)_addSGXPCResponseToReplyWhitelistForMethods:(struct objc_method_description { SEL x1; char *x2; }*)arg1 count:(unsigned int)arg2 interface:(id)arg3;
+ (void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2;
+ (void)_registerWhitelistBlock:(id /* block */)arg1 forProtocol:(id)arg2;
+ (void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3;
+ (void)initialize;
+ (void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3;
+ (void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3;
+ (id)xpcInterface;
+ (id)xpcInterfaceForProtocol:(id)arg1;

@end
