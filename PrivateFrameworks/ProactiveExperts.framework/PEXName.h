/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXName : NSObject <NSCopying> {
    NSString * _first;
    NSString * _last;
    NSString * _middle;
    NSString * _phoneticFirst;
    NSString * _phoneticLast;
    NSString * _phoneticMiddle;
}

@property (nonatomic, retain) NSString *first;
@property (nonatomic, retain) NSString *last;
@property (nonatomic, retain) NSString *middle;
@property (nonatomic, retain) NSString *phoneticFirst;
@property (nonatomic, retain) NSString *phoneticLast;
@property (nonatomic, retain) NSString *phoneticMiddle;

+ (id)nameFromNameItem:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)first;
- (unsigned long long)hash;
- (bool)isEquivalentToName:(id)arg1;
- (id)last;
- (void)mergeName:(id)arg1;
- (id)middle;
- (id)phoneticFirst;
- (id)phoneticLast;
- (id)phoneticMiddle;
- (void)setFirst:(id)arg1;
- (void)setLast:(id)arg1;
- (void)setMiddle:(id)arg1;
- (void)setPhoneticFirst:(id)arg1;
- (void)setPhoneticLast:(id)arg1;
- (void)setPhoneticMiddle:(id)arg1;

@end
