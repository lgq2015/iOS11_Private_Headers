/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPColumn : NSObject {
    bool  mHasSpacing;
    long long  mIndex;
    float  mSpacing;
    float  mWidth;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (bool)hasSpacing;
- (long long)index;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (float)spacing;
- (float)width;

@end
