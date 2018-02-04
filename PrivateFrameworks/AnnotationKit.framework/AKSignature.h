/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignature : NSObject <NSSecureCoding> {
    double  _baselineOffset;
    NSDate * _creationDate;
    PKDrawing * _drawing;
    struct CGPath { } * _path;
    bool  _shouldPersist;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokesBounds;
    NSUUID * _uniqueID;
}

@property double baselineOffset;
@property (retain) NSDate *creationDate;
@property (readonly) PKDrawing *drawing;
@property (readonly) struct CGPath { }*path;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pathBounds;
@property bool shouldPersist;
@property (retain) NSUUID *uniqueID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)baselineOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)dealloc;
- (id)drawing;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initForTesting;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawing:(id)arg1 path:(struct CGPath { }*)arg2 baselineOffset:(double)arg3;
- (id)initWithDrawing:(id)arg1 path:(struct CGPath { }*)arg2 baselineOffset:(double)arg3 creationDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (struct CGPath { }*)path;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pathBounds;
- (void)setBaselineOffset:(double)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setShouldPersist:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (bool)shouldPersist;
- (id)uniqueID;

@end
