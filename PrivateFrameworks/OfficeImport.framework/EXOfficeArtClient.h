/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXOfficeArtClient : OAXClient {
    bool  mAutoChartFillIsHollow;
    bool  mAutoChartStrokeIsHollow;
}

@property bool autoChartFillIsHollow;
@property bool autoChartStrokeIsHollow;

- (bool)autoChartFillIsHollow;
- (bool)autoChartStrokeIsHollow;
- (bool)chartAutoFillIsHollow;
- (bool)chartAutoStrokeIsHollow;
- (void)readClientDataFromNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 toDrawable:(id)arg2 state:(id)arg3;
- (void)setAutoChartFillIsHollow:(bool)arg1;
- (void)setAutoChartStrokeIsHollow:(bool)arg1;

@end
