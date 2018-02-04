/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKEditAction : NSObject {
    bool  _destructive;
    NSString * _name;
    SEL  _selector;
}

@property (nonatomic) bool destructive;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SEL selector;

+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;
+ (id)deleteActionWithName:(id)arg1;

- (void)dealloc;
- (bool)destructive;
- (id)name;
- (SEL)selector;
- (void)setDestructive:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end
