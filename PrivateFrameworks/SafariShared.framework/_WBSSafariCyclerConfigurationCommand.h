/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface _WBSSafariCyclerConfigurationCommand : NSObject {
    SEL  _action;
    NSString * _help;
    unsigned long long  _maximumArgumentCount;
    unsigned long long  _minimumArgumentCount;
    NSString * _name;
    id  _target;
    NSString * _usage;
}

@property (nonatomic) SEL action;
@property (nonatomic, readonly, copy) NSString *help;
@property (nonatomic) unsigned long long maximumArgumentCount;
@property (nonatomic) unsigned long long minimumArgumentCount;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) id target;
@property (nonatomic, copy) NSString *usage;

- (void).cxx_destruct;
- (SEL)action;
- (id)help;
- (id)init;
- (id)initWithName:(id)arg1 help:(id)arg2;
- (bool)invokeWithParameters:(id)arg1;
- (unsigned long long)maximumArgumentCount;
- (unsigned long long)minimumArgumentCount;
- (id)name;
- (void)setAction:(SEL)arg1;
- (void)setArgumentCount:(unsigned long long)arg1;
- (void)setMaximumArgumentCount:(unsigned long long)arg1;
- (void)setMinimumArgumentCount:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setUsage:(id)arg1;
- (id)target;
- (id)usage;

@end
