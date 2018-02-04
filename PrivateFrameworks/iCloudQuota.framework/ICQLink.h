/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
 */

@interface ICQLink : NSObject {
    long long  _action;
    long long  _options;
    NSDictionary * _parameters;
    NSString * _text;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)linkWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
+ (id)linkWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
+ (bool)performAction:(long long)arg1 parameters:(id)arg2 options:(long long)arg3;

- (void).cxx_destruct;
- (long long)action;
- (id)debugDescription;
- (id)init;
- (id)initWithText:(id)arg1 action:(long long)arg2 parameters:(id)arg3;
- (id)initWithText:(id)arg1 options:(long long)arg2 action:(long long)arg3 parameters:(id)arg4;
- (long long)options;
- (id)parameters;
- (bool)performAction;
- (bool)performActionWithOptions:(long long)arg1;
- (id)text;

@end
