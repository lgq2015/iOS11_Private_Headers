/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicControlTargetAction : NSObject {
    SEL  _action;
    unsigned long long  _controlEvents;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) unsigned long long controlEvents;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (SEL)action;
- (unsigned long long)controlEvents;
- (void)setAction:(SEL)arg1;
- (void)setControlEvents:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
