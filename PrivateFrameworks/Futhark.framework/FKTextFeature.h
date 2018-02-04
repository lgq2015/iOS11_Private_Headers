/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
 */

@interface FKTextFeature : NSObject {
    union { 
        int seqInd; 
        int ccInd; 
    }  _backingIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSArray * _corners;
    long long  _featureID;
    int  _scale;
    struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; BOOL x10[128]; struct vImage_Buffer { void *x_11_1_1; unsigned long long x_11_1_2; unsigned long long x_11_1_3; unsigned long long x_11_1_4; } x11; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct lineseg {} *x13; int x14; int x15; int x16; struct concomp {} *x17; int x18; int x19; int x20; int x21; struct sequence {} *x22; int x23; int x24; int x25; int x26; } * _session;
    NSArray * _subFeatures;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly, retain) NSArray *corners;
@property (nonatomic, readonly) long long featureID;
@property (nonatomic, retain) NSArray *subFeatures;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, readonly) long long type;

+ (id)featureFromConcompIndex:(int)arg1 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; BOOL x10[128]; struct vImage_Buffer { void *x_11_1_1; unsigned long long x_11_1_2; unsigned long long x_11_1_3; unsigned long long x_11_1_4; } x11; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct lineseg {} *x13; int x14; int x15; int x16; struct concomp {} *x17; int x18; int x19; int x20; int x21; struct sequence {} *x22; int x23; int x24; int x25; int x26; }*)arg2 roiOffset:(struct CGPoint { double x1; double x2; })arg3 dimensions:(struct CGSize { double x1; double x2; })arg4 type:(long long)arg5 createDiacriticFeatures:(bool)arg6 featureID:(long long*)arg7 scale:(int)arg8;
+ (id)featureFromSequenceIndex:(int)arg1 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; BOOL x10[128]; struct vImage_Buffer { void *x_11_1_1; unsigned long long x_11_1_2; unsigned long long x_11_1_3; unsigned long long x_11_1_4; } x11; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct lineseg {} *x13; int x14; int x15; int x16; struct concomp {} *x17; int x18; int x19; int x20; int x21; struct sequence {} *x22; int x23; int x24; int x25; int x26; }*)arg2 roiOffset:(struct CGPoint { double x1; double x2; })arg3 dimensions:(struct CGSize { double x1; double x2; })arg4 createConcompFeatures:(bool)arg5 createDiacriticFeatures:(bool)arg6 featureID:(long long*)arg7 scale:(int)arg8;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)corners;
- (void)dealloc;
- (long long)featureID;
- (id)initWithType:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; unsigned int x9; BOOL x10[128]; struct vImage_Buffer { void *x_11_1_1; unsigned long long x_11_1_2; unsigned long long x_11_1_3; unsigned long long x_11_1_4; } x11; struct vImage_Buffer { void *x_12_1_1; unsigned long long x_12_1_2; unsigned long long x_12_1_3; unsigned long long x_12_1_4; } x12; struct lineseg {} *x13; int x14; int x15; int x16; struct concomp {} *x17; int x18; int x19; int x20; int x21; struct sequence {} *x22; int x23; int x24; int x25; int x26; }*)arg5 backingIndex:(union { int x1; int x2; })arg6 scale:(int)arg7;
- (void)setSubFeatures:(id)arg1;
- (void)setText:(id)arg1;
- (id)subFeatures;
- (id)text;
- (long long)type;

@end
