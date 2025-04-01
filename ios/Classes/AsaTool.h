#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AsaTool : NSObject

+ (nullable NSString *)attributionToken;

+ (void)requestAttributionWithComplete:(void(^)(NSDictionary * _Nullable data, NSError * _Nullable error))complete;

@end

NS_ASSUME_NONNULL_END
