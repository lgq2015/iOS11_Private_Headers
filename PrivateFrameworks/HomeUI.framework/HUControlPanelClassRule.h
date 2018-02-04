/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlPanelClassRule : NSObject <HUControlPanelRule> {
    Class  _class;
    double  _priority;
    Protocol * _protocol;
}

@property (nonatomic, copy) Class class;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double priority;
@property (nonatomic, retain) Protocol *protocol;
@property (readonly) Class superclass;

+ (id)ruleWithControlItemClass:(Class)arg1;
+ (id)ruleWithControlItemProtocol:(id)arg1;

- (void).cxx_destruct;
- (Class)class;
- (id)initWithControlItemClass:(Class)arg1 protocol:(id)arg2;
- (double)priority;
- (id)protocol;
- (bool)ruleMatchesItem:(id)arg1;
- (void)setClass:(Class)arg1;
- (void)setPriority:(double)arg1;
- (void)setProtocol:(id)arg1;

@end
