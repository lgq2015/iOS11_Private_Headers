/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKIconManager : NSObject

+ (id)_iconManager;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 iconText:(id)arg2 size:(unsigned long long)arg3 forScale:(double)arg4 navMode:(bool)arg5;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(bool)arg4;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2;
+ (id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(bool)arg3;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(bool)arg6 transparent:(bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(bool)arg6 transparent:(bool)arg7 transitmode:(bool)arg8;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(bool)arg6 transparent:(bool)arg7 transitmode:(bool)arg8 interactive:(bool)arg9;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(bool)arg6 transparent:(bool)arg7 transitmode:(bool)arg8 interactive:(bool)arg9 isCarplay:(bool)arg10;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(bool)arg5;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(bool)arg5 transitMode:(bool)arg6;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(bool)arg5 transitMode:(bool)arg6 interactive:(bool)arg7;
+ (id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(bool)arg5 transitMode:(bool)arg6 isCarplay:(bool)arg7;
+ (id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3;
+ (struct CGColor { }*)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor { }*)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (struct CGColor { }*)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2;
+ (void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(id /* block */)arg4;
+ (void)setDiskCacheURL:(id)arg1;
+ (void)setUseSharedCaches;

@end
