/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDDiagnosticDataReporter : NSObject

+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)clearScalarKey:(id)arg1;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2 limitingSigDigs:(unsigned long long)arg3;

@end
