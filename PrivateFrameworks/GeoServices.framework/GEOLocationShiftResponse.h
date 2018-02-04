/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftResponse : PBCodable <NSCopying> {
    struct GEOPixelPoint { 
        double _x; 
        double _y; 
        int _z; 
        struct { 
            unsigned int z : 1; 
        } _has; 
    }  _shiftedPixel;
}

@property (nonatomic) struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; } shiftedPixel;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShiftedPixel:(struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })arg1;
- (struct GEOPixelPoint { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; } x4; })shiftedPixel;
- (void)writeTo:(id)arg1;

@end
