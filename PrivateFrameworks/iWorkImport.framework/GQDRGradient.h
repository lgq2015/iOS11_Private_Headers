/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRGradient : NSObject <GQDNameMappable> {
    float  mAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  mEnd;
    float  mOpacity;
    struct CGPoint { 
        double x; 
        double y; 
    }  mStart;
    struct __CFArray { } * mStops;
    int  mType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (float)angle;
- (void)dealloc;
- (struct CGPoint { double x1; double x2; })end;
- (float)opacity;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (struct CGPoint { double x1; double x2; })start;
- (struct __CFArray { }*)stops;
- (int)type;

@end
