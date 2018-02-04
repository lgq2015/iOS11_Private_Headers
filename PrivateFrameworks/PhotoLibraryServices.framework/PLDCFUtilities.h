/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDCFUtilities : NSObject

+ (void)computeSHA256OfString:(id)arg1 intoBuffer:(char *)arg2;
+ (id)convertHash:(unsigned int)arg1 usingPlaceValues:(id)arg2;
+ (id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 isOriginal:(bool)arg4;
+ (id)dcfRegex;
+ (id)encodeFileNameFromHash:(unsigned int)arg1;
+ (bool)fileName:(id)arg1 matchesRegex:(id)arg2;
+ (id)fileNameByRemovingRenderMarkerInFileName:(id)arg1;
+ (unsigned int)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)insertRenderMarkerToFileName:(id)arg1;
+ (bool)isRenderFileName:(id)arg1;
+ (bool)isValidDCFFileName:(id)arg1;
+ (id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3;
+ (id)placeValuesFromBases:(id)arg1;
+ (id)renderDCFRegex;

@end
