/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAnalysisTitleColorFinder : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _ROI;
    struct CGSize { 
        double width; 
        double height; 
    }  _UIImageSize;
    char * _binIndexMap;
    int  _bpr;
    NSMutableArray * _dominantColor;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _dominantColorIndex;
    int  _endHeight;
    int  _endWidth;
    float  _fv;
    int  _height;
    int  _heightOrg;
    float * _imageDataHSV;
    int  _photoType;
    NSMutableArray * _popupColor;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    }  _popupColorIndex;
    int  _startHeight;
    int  _startWidth;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transformFromOrientation;
    int  _width;
    int  _widthOrg;
}

@property (nonatomic, readonly, copy) NSArray *dominantColors;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeImageBounds;
@property (nonatomic, readonly, copy) NSArray *popupColors;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)analyzeCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (void)analyzeUIImage:(id)arg1;
- (void)buildModel:(struct CGImage { }*)arg1;
- (void)dealloc;
- (id)dominantColors;
- (void)findColorHSV;
- (void)findDominantPopupColor:(float*)arg1;
- (void)findPeaks:(float*)arg1 startIndex:(int)arg2;
- (id)init;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(long long)arg2;
- (id)initWithUIImage:(id)arg1;
- (void)mappingROI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeImageBounds;
- (id)popupColors;
- (void)rgb2hsv:(float)arg1 g:(float)arg2 b:(float)arg3 h:(float*)arg4 s:(float*)arg5 v:(float*)arg6;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
