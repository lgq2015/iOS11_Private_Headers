/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

@interface _EAEmailAddress : NSObject {
    NSString * _emailAddress;
}

@property (nonatomic, readonly, copy) NSString *emailAddress;
@property (nonatomic, readonly, copy) NSString *rawAddress;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddress;
- (unsigned long long)hash;
- (id)initWithEmailAddress:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rawAddress;

@end
