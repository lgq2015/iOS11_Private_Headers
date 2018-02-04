/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNNodeWeakComponent : NSObject {
    id  component;
    SCNNodeComponent * next;
    long long  type;
}

@property (nonatomic) id component;
@property (nonatomic, retain) SCNNodeComponent *next;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)component;
- (id)initWithType:(long long)arg1 component:(id)arg2;
- (id)next;
- (void)setComponent:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
