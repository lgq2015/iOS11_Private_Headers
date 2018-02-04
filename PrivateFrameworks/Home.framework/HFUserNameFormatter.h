/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUserNameFormatter : NSFormatter {
    CNContactFormatter * _contactFormatter;
    HMHome * _home;
    unsigned long long  _style;
}

@property (nonatomic, readonly) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long style;

+ (long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)contactFormatter;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (unsigned long long)style;

@end
