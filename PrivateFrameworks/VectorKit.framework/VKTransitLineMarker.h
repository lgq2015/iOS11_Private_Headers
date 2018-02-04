/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTransitLineMarker : NSObject <GEOTransitArtworkDataSource, GEOTransitShieldDataSource, MKTransitLineMarker> {
    GEOMapItemIdentifier * _identifier;
    NSString * _labelLocale;
    NSString * _labelText;
    struct { 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } transitLineColor; 
    }  _shieldColor;
    NSString * _shieldLocale;
    NSString * _shieldText;
    long long  _shieldType;
    void * _transitLinkID;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) long long artworkSourceType;
@property (nonatomic, readonly) long long artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSString *labelLocale;
@property (nonatomic, readonly) NSString *labelText;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{?={Matrix<float' */ struct  shieldColor; /* unknown property attribute:  1>=[4f]}} */
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (nonatomic, readonly) NSString *shieldLocale;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) void*transitLinkID;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)markerWithFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; float x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 transitLink:(const struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*)arg2;

- (id).cxx_construct;
- (void)dealloc;
- (id)description;
- (unsigned long long)featureID;
- (id)identifier;
- (id)initWithFeature:(struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; bool x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; float x7; unsigned int x8; unsigned int x9; unsigned int x10; }*)arg1 transitLink:(const struct { id x1; unsigned int x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; unsigned long long x6; unsigned long long x7; struct _NSRange { unsigned long long x_8_1_1; unsigned long long x_8_1_2; } x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; bool x10; struct _NSRange { unsigned long long x_11_1_1; unsigned long long x_11_1_2; } x11; struct _NSRange { unsigned long long x_12_1_1; unsigned long long x_12_1_2; } x12; struct _NSRange { unsigned long long x_13_1_1; unsigned long long x_13_1_2; } x13[2]; struct _NSRange { unsigned long long x_14_1_1; unsigned long long x_14_1_2; } x14[2]; }*)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)labelLocale;
- (id)labelText;
- (struct { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; })shieldColor;
- (id)shieldLocale;
- (id)shieldText;
- (long long)shieldType;
- (void*)transitLinkID;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)accessibilityText;
- (id)artwork;
- (long long)artworkSourceType;
- (long long)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)mapItemIdentifier;
- (id)shieldColorString;
- (id)shieldDataSource;

@end
