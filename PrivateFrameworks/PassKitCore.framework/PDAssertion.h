/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDAssertion : NSObject {
    NSString * _identifier;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3;
- (id)reason;
- (unsigned long long)type;

@end
