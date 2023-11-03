using ReactNative.Bridge;
using System;
using System.Collections.Generic;
using Windows.ApplicationModel.Core;
using Windows.UI.Core;

namespace Meditation.To.Smooth.Soul.RNMeditationToSmoothSoul
{
    /// <summary>
    /// A module that allows JS to share data.
    /// </summary>
    class RNMeditationToSmoothSoulModule : NativeModuleBase
    {
        /// <summary>
        /// Instantiates the <see cref="RNMeditationToSmoothSoulModule"/>.
        /// </summary>
        internal RNMeditationToSmoothSoulModule()
        {

        }

        /// <summary>
        /// The name of the native module.
        /// </summary>
        public override string Name
        {
            get
            {
                return "RNMeditationToSmoothSoul";
            }
        }
    }
}
