/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHNonTextCandidateStroke : NSObject <NSCopying, NSMutableCopying> {
    bool  _active;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    double  _boundsDiagonal;
    long long  _classification;
    double  _containerScore;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _enlargedBounds;
    double  _lineError;
    double  _lineOrientationAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatedBounds;
    <CHStrokeIdentifier> * _strokeIdentifier;
    long long  _substrokesCount;
    double  _support;
    NSMutableDictionary * _supportByStrokeIdentifier;
}

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double boundsDiagonal;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) double containerScore;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } enlargedBounds;
@property (nonatomic, readonly) double lineError;
@property (nonatomic, readonly) double lineOrientationAngle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rotatedBounds;
@property (nonatomic, readonly, retain) <CHStrokeIdentifier> *strokeIdentifier;
@property (nonatomic, readonly) long long substrokesCount;
@property (nonatomic, readonly) double support;
@property (nonatomic, readonly, retain) NSDictionary *supportByStrokeIdentifier;

- (bool)active;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)boundsDiagonal;
- (long long)classification;
- (double)containerScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })enlargedBounds;
- (id)initWithStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 classification:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6;
- (id)initWithStrokeIdentifier:(id)arg1 substrokesCount:(long long)arg2 classification:(long long)arg3 lineOrientation:(double)arg4 lineError:(double)arg5 containerScore:(double)arg6 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7 boundsDiagonal:(double)arg8 enlargedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg9 rotatedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg10 supportByStrokeIdentifier:(id)arg11 support:(double)arg12 active:(bool)arg13;
- (double)lineError;
- (double)lineOrientationAngle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotatedBounds;
- (id)strokeIdentifier;
- (long long)substrokesCount;
- (double)support;
- (id)supportByStrokeIdentifier;

@end
