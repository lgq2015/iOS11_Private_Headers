/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageViewElementCacheKey : NSObject {
    long long  _imageTreatment;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSURL * _url;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 imageTreatment:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
