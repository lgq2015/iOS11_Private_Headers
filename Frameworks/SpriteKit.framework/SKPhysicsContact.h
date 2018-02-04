/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKPhysicsContact : NSObject {
    SKPhysicsBody * _bodyA;
    SKPhysicsBody * _bodyB;
    double  _collisionImpulse;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _contactNormal;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contactPoint;
}

@property (nonatomic, readonly) SKPhysicsBody *bodyA;
@property (nonatomic, readonly) SKPhysicsBody *bodyB;
@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) struct CGVector { double x1; double x2; } contactNormal;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contactPoint;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (void).cxx_destruct;
- (id)bodyA;
- (id)bodyB;
- (double)collisionImpulse;
- (struct CGVector { double x1; double x2; })contactNormal;
- (struct CGPoint { double x1; double x2; })contactPoint;

@end
