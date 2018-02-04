/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKComponentSystem : NSObject <NSFastEnumeration> {
    Class  _componentClass;
    NSMutableArray * _components;
}

@property (nonatomic, readonly) Class componentClass;
@property (nonatomic, readonly, retain) NSArray *components;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (void)addComponentWithEntity:(id)arg1;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (Class)componentClass;
- (id)components;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)initWithComponentClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (void)removeComponent:(id)arg1;
- (void)removeComponentWithEntity:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)updateWithDeltaTime:(double)arg1;

@end
