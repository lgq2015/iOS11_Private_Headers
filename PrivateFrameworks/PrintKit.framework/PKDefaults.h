/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKDefaults : NSObject

+ (void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(struct CGSize { double x1; double x2; })arg3;
+ (void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(struct CGSize { double x1; double x2; })arg3 forPhoto:(bool)arg4;
+ (id)lastUsedPrinters;
+ (id)lastUsedPrintersForPhoto:(bool)arg1;
+ (long long)printerLookupWithArray:(id)arg1 withTimeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
