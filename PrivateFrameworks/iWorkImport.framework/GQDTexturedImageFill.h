/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {
    GQDColor * mColor;
    GQDFilteredImage * mFilteredImage;
    int  mTechnique;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (id)color;
- (void)dealloc;
- (id)imageBinary;
- (void)invalidateFilteredImage;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (void)setColor:(id)arg1;
- (int)technique;

@end
