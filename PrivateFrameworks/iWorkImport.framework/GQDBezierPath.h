/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBezierPath : GQDPath <GQDNameMappable> {
    bool  mHFlip;
    bool  mHasHFlip;
    bool  mHasVFlip;
    struct CGPath { } * mPath;
    char * mPathStr;
    bool  mVFlip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct __CFString { }*)createCFStringFromPath:(struct CGPath { }*)arg1;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct CGPath { }*)createBezierPath;
- (void)dealloc;
- (bool)hasHorizontalFlip;
- (bool)hasVerticalFlip;
- (bool)horizontalFlip;
- (id)initWithPathString:(const char *)arg1;
- (bool)isRectangular;
- (struct CGPath { }*)path;
- (char *)pathStr;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (bool)verticalFlip;

@end
