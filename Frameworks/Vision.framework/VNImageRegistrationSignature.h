/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageRegistrationSignature : NSObject <NSSecureCoding> {
    struct FastRegistration_Signatures { 
        float *piRow; 
        unsigned long long nPiRow; 
        struct Projections_meanStdTable { 
            float *sumTable; 
            float *sumSqTable; 
        } piRowTable; 
        float *piCol; 
        unsigned long long nPiCol; 
        struct Projections_meanStdTable { 
            float *sumTable; 
            float *sumSqTable; 
        } piColTable; 
        char *_memoryContainer; 
    }  mSignature_;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (const struct FastRegistration_Signatures { float *x1; unsigned long long x2; struct Projections_meanStdTable { float *x_3_1_1; float *x_3_1_2; } x3; float *x4; unsigned long long x5; struct Projections_meanStdTable { float *x_6_1_1; float *x_6_1_2; } x6; char *x7; }*)signature;

@end
